#include "bench_examples.h"

#include <sstream>
#include <cstdio>

#define TINYFORMAT_USE_VARIADIC_TEMPLATES

#ifdef __GNUC__
// Tinyformat has a number of non-annotated switch fallthrough cases
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wimplicit-fallthrough"
#endif

#include "dependencies/tinyformat/tinyformat.h"

#include "dependencies/fmt/include/fmt/format.h"

std::string bench_snprintf(const std::string &prefix, const Vec3<float> &vec)
{
		char buffer[500];
		snprintf(buffer, 500, "%s: EXAMPLE_STRING EXAMPLE_VEC: {%f, %f, %f}", prefix.c_str(), vec.x, vec.y, vec.z);
		return buffer;
}


std::string bench_sstream(const std::string &prefix, const Vec3<float> &vec)
{
		std::ostringstream ss;
		ss << prefix << ": EXAMPLE_STRING EXAMPLE_VEC: {" << vec.x << ",  " << vec.y << ", " << vec.z << "}";
		return ss.str();
}

std::string bench_tinyformat(const std::string &prefix, const Vec3<float> &vec)
{
		return tfm::format("%s: EXAMPLE_STRING EXAMPLE_VEC: {%f, %f, %f}", prefix, vec.x, vec.y, vec.z);
}

std::string bench_fmt(const std::string &prefix, const Vec3<float> &vec)
{
		return fmt::format("{0}: EXAMPLE_STRING EXAMPLE_VEC: {{{1}, {2}, {3}}}", prefix, vec.x, vec.y, vec.z);
}
