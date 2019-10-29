
|               ns/op |                op/s |   MdAPE | benchmark
|--------------------:|--------------------:|--------:|:----------------------------------------------
|              605.75 |        1,650,850.57 |    1.1% | `snprintf`
|            1,559.00 |          641,436.82 |    0.1% | `sstream`
|            1,580.46 |          632,725.99 |    0.5% | `tinyformat`
|              442.91 |        2,257,773.93 |    1.4% | `fmt`
|            1,410.32 |          709,057.91 |    1.4% | `sstream_vec`
|            1,384.77 |          722,141.98 |    1.7% | `tinyformat_vec`
|              434.91 |        2,299,308.00 |    1.6% | `fmt_vec`
snprintf:
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.000000, 2.000000, 3.000000}
sstream: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,  2, 3}
tinyformat: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.000000, 2.000000, 3.000000}
fmt: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.0, 2.0, 3.0}
sstream_vec: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,2,3}
tinyformat_vec: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1,2,3}
fmt_vec: 
This is the prefix: EXAMPLE_STRING EXAMPLE_VEC: {1.0, 2.0, 3.0}
