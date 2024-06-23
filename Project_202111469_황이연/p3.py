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
    while True: 
        min_distance = float('inf')
        next_honeycomb = None
        for i in range(N):
            for j in range(N):
                if 1 <= forest[i][j] < bear_size:
                    distance = abs(bear_x - i) + abs(bear_y - j)
                    if distance < min_distance:
                        min_distance = distance
                        next_honeycomb = (i, j)
                    elif distance == min_distance:
                        if i < next_honeycomb[0] or (i == next_honeycomb[0] and j < next_honeycomb[1]):
                            next_honeycomb = (i, j)
                            
        if next_honeycomb is None:
            break
        
        x, y = next_honeycomb
        time += min_distance
        forest[x][y] = 0
        honeycomb_count += 1

        if honeycomb_count == bear_size:
            bear_size += 1
            honeycomb_count = 0

        bear_x, bear_y = x, y
        
    result = time
    return result
    

result = problem3(input)
assert result == 14
print("정답입니다.")
