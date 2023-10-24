#ifndef DECK_H
#define DECK_H

/**
 * enum kind_e -the card kind
 * @SPADE:the spade kind
 * @HEART:the heart kind
 * @CLUB:the club kind
 * @DIAMOND:the diamond kind
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s -A playing card
 *
 * @value:The value of the card
 * From "Ace" to "King"
 * @kind:A Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s -The deck of card
 *
 * @card:A Pointer to the card of the node
 * @prev:A Pointer to the previous node of the list
 * @next:A Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
#endif
