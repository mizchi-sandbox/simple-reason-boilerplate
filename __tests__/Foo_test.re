open Jest;

open Foo;

describe("Expect", () => Expect.(test("toBe", () => expect(myfn) |> toBe(1))));
