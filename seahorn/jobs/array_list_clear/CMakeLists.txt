add_executable(array_list_clear
  ${AWS_C_COMMON_ROOT}/source/array_list.c
  aws_array_list_clear_harness.c)
target_compile_definitions(array_list_clear
  PUBLIC MAX_ITEM_SIZE=2
  MAX_INITIAL_ITEM_ALLOCATION=9223372036854775808ULL)
sea_attach_bc_link(array_list_clear)
sea_add_unsat_test(array_list_clear)

# klee
sea_add_klee(array_list_clear ${AWS_C_COMMON_ROOT}/source/array_list.c
aws_array_list_clear_harness.klee.c)
