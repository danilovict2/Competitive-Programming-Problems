You are messaging in one of the popular social networks via your smartphone. Your smartphone can show at most k most recent conversations with your friends. Initially, the screen is empty (i.e. the number of displayed conversations equals 0

).

Each conversation is between you and some of your friends. There is at most one conversation with any of your friends. So each conversation is uniquely defined by your friend.

You (suddenly!) have the ability to see the future. You know that during the day you will receive n
messages, the i-th message will be received from the friend with ID idi (1≤idi≤109

).

If you receive a message from idi

in the conversation which is currently displayed on the smartphone then nothing happens: the conversations of the screen do not change and do not change their order, you read the message and continue waiting for new messages.

Otherwise (i.e. if there is no conversation with idi

on the screen):

    Firstly, if the number of conversations displayed on the screen is k

, the last conversation (which has the position k
) is removed from the screen.
Now the number of conversations on the screen is guaranteed to be less than k
and the conversation with the friend idi
is not displayed on the screen.
The conversation with the friend idi

    appears on the first (the topmost) position on the screen and all the other displayed conversations are shifted one position down. 

Your task is to find the list of conversations (in the order they are displayed on the screen) after processing all n

messages.
