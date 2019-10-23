#ifndef PROJECT1_PRIORITY_QUEUE_H
#define PROJECT1_PRIORITY_QUEUE_H 

#include <queue>

template <typename T> 
class templatePriorityQueue {
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
	
	private:
		std::priority_queue<T> storage;	
};
#endif
