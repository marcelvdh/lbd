// clang -target mips-unknown-linux-gnu -c ch4_2_2.cpp  -emit-llvm -o ch4_2_2.bc
// ~/llvm/test/cmake_debug_build/Debug/bin/llc -march=cpu0 -relocation-model=pic -filetype=asm ch4_2_2.bc -o -

/// start
int test_mod2()
{
  int b = 11;
  volatile int a = 12;
  
  b = (b+1)%a;
  
  return b;
}
