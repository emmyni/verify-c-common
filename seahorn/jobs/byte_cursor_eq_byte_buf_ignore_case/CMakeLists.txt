add_executable(byte_cursor_eq_byte_buf_ignore_case
  ${AWS_C_COMMON_ROOT}/source/byte_buf.c
  aws_byte_cursor_eq_byte_buf_ignore_case_harness.c)
sea_attach_bc_link(byte_cursor_eq_byte_buf_ignore_case)
configure_file(sea.yaml sea.yaml @ONLY)
sea_add_unsat_test(byte_cursor_eq_byte_buf_ignore_case)

# klee
sea_add_klee(byte_cursor_eq_byte_buf_ignore_case
  ${AWS_C_COMMON_ROOT}/source/byte_buf.c
  aws_byte_cursor_eq_byte_buf_ignore_case_harness.c)
