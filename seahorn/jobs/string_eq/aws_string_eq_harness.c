/*
 *
 */

#include <aws/common/string.h>
#include <seahorn/seahorn.h>
#include <byte_buf_helper.h>
#include <string_helper.h>
#include <utils.h>
#include <stddef.h>

int main() {
    struct aws_string *str_a = nd_bool() ?
            ensure_string_is_allocated_bounded_length(MAX_BUFFER_SIZE) : NULL;
    struct aws_string *str_b = nd_bool() ?
            str_a : ensure_string_is_allocated_bounded_length(MAX_BUFFER_SIZE);
    if (aws_string_eq(str_a, str_b) && str_a && str_b) {
        sassert(str_a->len == str_b->len);
        assert_bytes_match(str_a->bytes, str_b->bytes, str_a->len);
        sassert(aws_string_is_valid(str_a));
        sassert(aws_string_is_valid(str_b));
    }

    return 0;
}
