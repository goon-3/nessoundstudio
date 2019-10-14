class NoteDuration
{
	public:
	NoteDuration(float d);
	virtual ~NoteDuration();

	private:
	float _duration; 

	bool is_valid(float d);

	public:
	void add_point(); // add a half note (a point on the bar)	
};
