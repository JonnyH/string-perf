
|               ns/op |                op/s |   MdAPE |         ins/op |         cyc/op |    IPC |    branches/op | missed% | benchmark
|--------------------:|--------------------:|--------:|---------------:|---------------:|-------:|---------------:|--------:|:----------------------------------------------
|              666.21 |        1,501,025.35 |    0.3% |       5,271.06 |       1,726.52 |  3.053 |       1,080.00 |    0.1% | `snprintf`
|            1,494.69 |          669,036.17 |    0.6% |      10,497.12 |       3,874.50 |  2.709 |       2,149.00 |    0.0% | `sstream`
|            1,758.21 |          568,758.89 |    0.9% |      11,956.15 |       4,559.14 |  2.622 |       2,437.00 |    0.1% | `tinyformat`
|              402.26 |        2,485,923.72 |    0.6% |       2,945.04 |       1,043.08 |  2.823 |         601.00 |    0.2% | `fmt`
|            1,501.84 |          665,850.46 |    0.1% |      10,645.12 |       3,891.48 |  2.735 |       2,192.00 |    0.0% | `sstream_vec`
|            1,616.17 |          618,745.87 |    0.2% |      11,432.13 |       4,189.66 |  2.729 |       2,361.00 |    0.0% | `tinyformat_vec`
|              450.28 |        2,220,819.09 |    0.7% |       3,213.04 |       1,167.23 |  2.753 |         623.00 |    0.2% | `fmt_vec`

|    test|    output
|-------:|---------
| snprintf | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.000000, 2.000000, 3.000000}
| sstream | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,  2, 3}
| tinyformat | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.000000, 2.000000, 3.000000}
| fmt | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.0, 2.0, 3.0}
| sstream_vec | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,2,3}
| tinyformat_vec | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,2,3}
| fmt_vec | This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.0, 2.0, 3.0}
