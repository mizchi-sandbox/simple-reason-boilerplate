open Jest;

open ReactHelper;

describe(
  "App",
  () =>
    Expect.(
      test(
        "render",
        () =>
          expect(renderToStaticMarkup(<App message="hello" />))
          |> toMatchSnapshot
      )
    )
);
