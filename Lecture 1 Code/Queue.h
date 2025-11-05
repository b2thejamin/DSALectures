#pragma once

// a singly linked list using queue ordering (first in first out)

template<typename Type>
class Queue
{
	struct Node {
		Type data;
		Node* next;
	};

	Node* mHead;      // points to the front of the queue
	Node* mTail;      // points to the back of the queue


public:
	Queue() {
		mHead = nullptr;
		mTail = nullptr;
	}

	~Queue() {

	}

	// add a node to the end of the list
	void PushBack(const Type& _data) {

		// dynamically allocate a node
		Node* endOfList = new Node;
		// set the data members
		endOfList->data = _data;
		endOfList->next = nullptr;

		// link into the existing list

		// is the list empty?
		if (mHead == nullptr) {
			mHead = mTail = endOfList;
		}
		// else traverse to the end of the list
		else {
			Node* walk = mHead;
			while(walk->next != nullptr) {
				walk = walk->next;
			}
			walk->next = endOfList;
			mTail->next = endOfList;
			mTail = endOfList;
		}
	}
};

