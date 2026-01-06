#include <stdio.h>
#include <string.h>

#include "regex.h"
#include "label_file.h"

char const *regex_arch_string(void)
{
	return "N/A";
}

char const *regex_version(void)
{
	return "N/A";
}

struct regex_data *regex_data_create(void)
{
	return NULL;
}

void regex_data_free(struct regex_data *regex)
{
}

int regex_prepare_data(struct regex_data **regex, char const *pattern_string,
		       struct regex_error_data *errordata)
{
	memset(errordata, 0, sizeof(struct regex_error_data));
	*regex = NULL;
	return -1;
}

int regex_load_mmap(struct mmap_area *mmap_area, struct regex_data **regex,
		    int do_load_precompregex, bool *regex_compiled)
{
	*regex = NULL;
	return -1;
}

int regex_writef(struct regex_data *regex, FILE *fp, int do_write_precompregex)
{
	return -1;
}

int regex_match(struct regex_data *regex, char const *subject, int partial)
{
	return REGEX_ERROR;
}

int regex_cmp(struct regex_data *regex1, struct regex_data *regex2)
{
	return SELABEL_INCOMPARABLE;
}

void regex_format_error(struct regex_error_data const *error_data, char *buffer,
			size_t buf_size)
{
	snprintf(buffer, buf_size, "N/A");
}
