#include <iostream>
#include "../../../../src/cctx.h"

void cctx_dump(const char* msg)
{
	std::cout << msg << std::endl;
}
#if (defined CCTX_ARCH_PTR_SIZE_2)
const char* cctx_arch_size_txt = "2";
#elif (defined CCTX_ARCH_PTR_SIZE_4)
const char* cctx_arch_size_txt = "4";
#elif (defined CCTX_ARCH_PTR_SIZE_8)
const char* cctx_arch_size_txt = "8";
#else
const chat* cctx_arch_size_txt = "undefined";
#endif

int main()
{
#if defined CCTX_ENDIAN_LITTLE
	cctx_dump("CCTX_ENDIAN_LITTLE defined");
#elif defined CCTX_ENDIAN_BIG
	cctx_dump("CCTX_ENDIAN_BIG defined");
#elif defined CCTX_ENDIAN_MIDDLE_LITTLE
	cctx_dump("CCTX_ENDIAN_MIDDLE_LITTLE defined");
#elif defined CCTX_ENDIAN_MIDDLE_BIG
	cctx_dump("CCTX_ENDIAN_MIDDLE_BIG defined");
#else
	cctx_dump("CCTX : no endianness defined");
#endif
}
