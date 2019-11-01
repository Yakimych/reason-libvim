open Vim;

let resetBuffer = filePath => {
  /* Reset clipboard provider */
  Clipboard.setProvider(_ => None);

  let _ = input("<esc>");
  let _ = input("<esc>");
  command("e!");
  let ret = Buffer.openFile(filePath);

  /* Move cursor to initial position */
  let _ = input("g");
  let _ = input("g");
  let _ = input("0");
  ret;
};

let input = (sz) => Vim.input(sz) |> ignore; 
