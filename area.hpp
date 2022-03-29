class Area 
{
  private:
    int length;
    int breadth;
  public:
    Area();
    Area(int l, int b): length(l), breadth(b) {}
    ~Area();
    void GetLength();
    int AreaCalculation();
    void DisplayArea(int temp);
}; // end of class
