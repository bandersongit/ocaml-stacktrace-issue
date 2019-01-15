;;Printexc.record_backtrace true
let numSlots = 100
let printBacktraceOnCall () =
  (Printexc.get_callstack numSlots) |> (Printexc.print_raw_backtrace stdout)
let run fn =
  match fn printBacktraceOnCall with
  | exception _ -> Printexc.print_backtrace stdout
  | _ -> ()
