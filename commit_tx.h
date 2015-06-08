#ifndef LIGHTNING_COMMIT_TX_H
#define LIGHTNING_COMMIT_TX_H
#include <ccan/tal/tal.h>
#include "lightning.pb-c.h"

struct sha256_double;

/* Create commitment tx to spend the anchor tx output; doesn't fill in
 * input scriptsig. */
struct bitcoin_tx *create_commit_tx(const tal_t *ctx,
				    OpenChannel *ours,
				    OpenChannel *theirs,
				    int64_t delta,
				    const struct sha256_double *anchor_txid,
				    unsigned int anchor_output);
#endif
