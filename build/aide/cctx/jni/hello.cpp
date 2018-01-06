#include <iostream>
#include "../../../../src/cctx.h"

void cctx_dump(const char* msg)
{
	std::cout << msg << std::endl;
}

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
