int solution(int a, int b, int n) {
    int answer = 0;
    
    // 빈 병 n개가 a개 이상일 때만 교환 가능
    while(n >= a) {
        int count = n / a;        // 교환 가능한 횟수
        int received = count * b; // 교환해서 새로 받는 콜라 수
        
        answer += received;       // 총 받은 콜라 수에 누적
        
        // n의 갱신: (교환하고 남은 나머지 빈 병) + (새로 마시고 생긴 빈 병)
        n = (n % a) + received;
    }
    
    return answer;
}