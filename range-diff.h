#ifndef RANGE_DIFF_H
#define RANGE_DIFF_H

#include "diff.h"
#include "strvec.h"

#define RANGE_DIFF_CREATION_FACTOR_DEFAULT 60

struct range_diff_options {
	int creation_factor;
	unsigned dual_color:1;
	const struct diff_options *diffopt;
	const struct strvec *other_arg;
};

/*
 * Compare series of commits in RANGE1 and RANGE2, and emit to the
 * standard output.  NULL can be passed to DIFFOPT to use the built-in
 * default.
 */
int show_range_diff(const char *range1, const char *range2,
		    struct range_diff_options *opts);

#endif
