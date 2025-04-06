
template <typename T>
class List
{
	struct node
	{
		T data;
		node *next;
	};
	using ptr_node = std::shared_ptr<node>;
public:

	void push(T data)
	{

	}

	T pop()
	{

	}

	bool empty() const
	{

	}

private:
	ptr_node node;
};

template <typename Container>
class LRUCash
{
public:

private:
	Container Container;
};