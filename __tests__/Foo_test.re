open Jest;

open Foo;

describe(
  "Foo",
  () => Expect.(test("myfn returns 1", () => expect(myfn) |> toBe(1)))
);
