import Lean

namespace Lean
open Lean.Elab

def run {α} [ToString α] : Unhygienic α → String := toString ∘ Unhygienic.run

#eval run `(Nat.one)
#eval run `($Syntax.missing)
namespace Syntax
#eval run `($missing)
#eval run `($(missing))
#eval run `($(id Syntax.missing) + 1)
#eval run $ let id := Syntax.missing; `($id + 1)
end Syntax
#eval run `(1 + 1)
#eval run $ `(fun a => a) >>= pure
#eval run $ `(def foo := 1)
#eval run $ `(def foo := 1 def bar := 2)
#eval run $ do let a ← `(Nat.one); `($a)
#eval run $ do let a ← `(Nat.one); `(f $a $a)
#eval run $ do let a ← `(Nat.one); `(f $ f $a 1)
#eval run $ do let a ← `(Nat.one); `(f $(id a))
#eval run $ do let a ← `(Nat.one); `($(a).b)
#eval run $ do let a ← `(1 + 2); match_syntax a with `($a + $b) => `($b + $a) | _ => pure Syntax.missing
#eval run $ do let a ← `(def foo := 1); match_syntax a with `($f:command) => pure f | _ => pure Syntax.missing
#eval run $ do let a ← `(def foo := 1 def bar := 2); match_syntax a with `($f:command $g:command) => `($g:command $f:command) | _ => pure Syntax.missing

#eval run $ do let a ← `(aa); match_syntax a with `($id:ident) => pure 0 | `($e) => pure 1 | _ => pure 2
#eval run $ do let a ← `(1 + 2); match_syntax a with `($id:ident) => pure 0 | `($e) => pure 1 | _ => pure 2
#eval run $ do let params ← #[`(a), `((b : Nat))].mapM id; `(fun $params* => 1)
#eval run $ do let a ← `(fun (a : Nat) b => c); match_syntax a with `(fun $aa* => $e) => pure aa | _ => pure #[]
#eval run $ do let a ← `(∀ a, c); match_syntax a with `(∀ $id:ident, $e) => pure id | _ => pure a
#eval run $ do let a ← `(∀ _, c); match_syntax a with `(∀ $id:ident, $e) => pure id | _ => pure a
-- this one should NOT check the kind of the matched node
#eval run $ do let a ← `(∀ _, c); match_syntax a with `(∀ $a, $e) => pure a | _ => pure a
#eval run $ do let a ← `(a); match_syntax a with `($id:ident) => pure id | _ => pure a
#eval run $ do let a ← `(a.{0}); match_syntax a with `($id:ident) => pure id | _ => pure a
#eval run $ do let a ← `(match a with | a => 1 | _ => 2); match_syntax a with `(match $e with $eqns:matchAlt*) => pure eqns | _ => pure #[]

#eval run do let a ← some <$> `(a); `({ a := a $[: $a]?})
#eval run do let a ← pure none; `({ a := a $[: $a]?})

#eval run do
  let pats := #[← `(a), ← `(a + 1)]
  let rhss := #[← `(b), ← `(b + 1)]
  `(match a with $[$pats => $rhss]|*)
end Lean
