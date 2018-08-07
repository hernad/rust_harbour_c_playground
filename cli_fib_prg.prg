// hbmk2  cli_fib_prg.prg -L. -lhbfibonacci -lfibonacci


procedure main() 

   //? "Hb fibonacci=", fibonacci()
   ? "poziv F1=", F1(2)
   ? "poziv F1B=", F1B(2)
   ? "poziv f1d_rust", F1D_RUST()
   ? "dbf test"
   dbf_test()
   
   inkey(0)

   RETURN
