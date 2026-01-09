
long long solution(int price, int money, int count)
{
    long long a =0;
   for(int i=1; i<=count; i++)
   {
      a += price * i; // 한번탈때마다 가격지불후 다음 엔 횟수만큼 추가로지급
   }
    if(a>money)
    {
        return a - money;
    }
    else if(a<=money)
    {
        return 0;
    }
}