template<class C>
class Byte
{
	public:
	Byte(C data);
	virtual ~Byte();

	private:
	C _data;

	public:
	C data() { return _data; }	
};
