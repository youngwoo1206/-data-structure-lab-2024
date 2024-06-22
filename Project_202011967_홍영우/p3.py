# 프로젝트 문제 3번
input = [[4, 3, 2, 1],
         [0, 0, 0, 0],
         [0, 0, 9, 0],
         [1, 2, 3, 4]]
N = 4

forest = []

def problem3(input):
    bear_size = 2
    honeycomb_count = 0
    time = 0
    bear_x, bear_y = 0, 0
    # 입력 힌트

    # forest 리스트를 input 리스트로 초기화
    forest = [row[:] for row in input]
    
    # 곰의 초기 위치 찾기
    for i in range(N):
        for j in range(N):
            if forest[i][j] == 9:
                bear_x, bear_y = i, j
                forest[i][j] = 0
    print("곰의 초기 위치 x : {0}, y : {1}".format(bear_x, bear_y))

    #여기에서부터 코드를 작성하세요.

    from collections import deque # BFS에 쓸 deque
    move = [(-1, 0), (1, 0), (0, -1), (0, 1)] # 상하좌우 이동방향

    def bfs(x, y, size):
        '''
        BFS로 곰이 먹을 수 있는 벌집 찾기
        '''
        visited = [[0] * N for _ in range(N)] # 배열 요소를 0으로 초기화
        queue = deque([(x, y, 0)]) # 위치와 거리
        visited[x][y] = 1 # 시작위치 방문처리
        honeycombs = [] # 먹을 수 있는 벌집

        while queue:
            x, y, dist = queue.popleft() 

            for mx, my in move: # 상하좌우 이동하며 탐색
                nx, ny = x + mx, y + my

                # 범위 내이고 방문하지 않은 경우
                if 0 <= nx < N and 0<= ny < N and not visited[nx][ny]:
                    # 곰의 크기보다 작거나 같은 경우, 큐에 추가
                    if forest[nx][ny] <= size:
                        visited[nx][ny] = 1
                        queue.append((nx, ny, dist + 1))
                        # 곰의 크기보다 작은 경우, 벌집에 추가(거리-행-열 순으로)
                        if 0 < forest[nx][ny] < size:
                            honeycombs.append((dist + 1, nx, ny))

        if not honeycombs: # 먹을 수 있는 벌집이 없는 경우
            return None
        
        # 정렬, 기본적으로 앞에 있는 인자 우선. 거리->행->열
        honeycombs.sort() 
        return honeycombs[0] # 가장 가까운 벌집

    while True:
        '''
        메인루프
        '''
        honey_n = bfs(bear_x, bear_y, bear_size) # 가장 가까운 벌집

        if not honey_n: # 없으면 break
            break

        dist, nx, ny = honey_n # 벌집(거리, x, y)
        bear_x, bear_y = nx, ny # 곰 위치 이동
        time += dist # 이동시간 증가
        honeycomb_count += 1 # 먹은 벌집 수 증가 
        forest[nx][ny] = 0 # 먹은 벌집은 0으로 변경

        # 곰이 자신의 크기와 같은 수의 벌집을 먹으면 크기 1 증가
        if honeycomb_count == bear_size: 
            bear_size += 1 # 크기 1 증가
            honeycomb_count = 0 # 먹은 벌집 수 초기화

    return time

result = problem3(input)

assert result == 14
print("정답입니다.")