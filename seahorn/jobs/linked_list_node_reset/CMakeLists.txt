add_executable(linked_list_node_reset
  aws_linked_list_node_reset_harness.c)
configure_file(sea.yaml sea.yaml @ONLY)
sea_attach_bc_link(linked_list_node_reset)
sea_add_unsat_test(linked_list_node_reset)

# klee
sea_add_klee(linked_list_node_reset
aws_linked_list_node_reset_harness.c)
