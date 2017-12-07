open Jest;

[@bs.val] [@bs.module "react-dom/server"]
external renderToString : ReasonReact.reactElement => string =
  "renderToString";

[@bs.val] [@bs.module "react-dom/server"]
external renderToStaticMarkup : ReasonReact.reactElement => string =
  "renderToStaticMarkup";

describe(
  "Page",
  () =>
    Expect.(
      test(
        "render",
        () =>
          expect(renderToStaticMarkup(<Page message="hello" />))
          |> toBe("<div>hello</div>")
      )
    )
);
