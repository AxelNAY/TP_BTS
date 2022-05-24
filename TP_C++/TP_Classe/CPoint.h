
class CPoint
{
public:
	CPoint();
	CPoint(int,int);
private:
	int m_x;
	int m_y;
public:
	void deplace(int, int);
	void affiche();
	void initialise(int, int);
	void setm_x(int);
	int getm_x(void);
	void setm_y(int);
	int getm_y(void);
};
