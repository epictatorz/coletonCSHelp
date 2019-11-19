class Date
{
 private:
  int month;
  int day;
  int year;
 public:
  Date();
  Date(int aMonth, int aDay, int aYear);
  void setMonth(int aMonth);
  void setDay(int aDay);
  void setYear(int aYear);
  int getMonth() const;
  int getDay() const;
  int getYear() const;
  void printDate() const;
  bool sameMonth (const Date & aDate) const;
};
