open Jest;

open ReactHelper;

describe(
  "Page",
  () =>
    Expect.(
      test(
        "render",
        () =>
          expect(renderToStaticMarkup(<App message="hello" />))
          |> toBe("<div>hello</div>")
      )
    )
);
