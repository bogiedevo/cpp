Hiding the Card Number
Write a function that takes a credit card number and only displays the last four characters. The rest of the card number must be replaced by ************.
Examples
cardHide("1234123456785678") ➞ "************5678"
cardHide("8754456321113213") ➞ "************3213"
------------------------------
std::string cardHide(std::string card)
{
	assert(card.length() >= 4);        
	std::fill(card.rbegin() + 4, card.rend(), '*');   // rbegin olarak terseten başlatıyoruz + 4 ünü almayıp rende kadar sansürlüyoruz 
	return card;
}