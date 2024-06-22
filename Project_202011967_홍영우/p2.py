# 프로젝트 문제 2번
input = ")))()"

def problem2(input):
    stack = []
    result, add_left, add_right = 0, 0, 0
    # 입력 문자열의 괄호 쌍을 확인
    for char in input:
        print(char)
        # 현재 문자가 '('인 경우, stack에 push
        if char == '(':
            stack.append(char)
        # 현재 문자가 ')'인 경우   
        else:
            # 스택이 채워져있으면, 스택에서 pop
            if stack:
                stack.pop()
            # 스택이 비어있으면, '('의 수를 1 증가    
            else:
                add_left += 1                
    # 스택에 남은 괄호의 수는 필요한 ')'의 수와 같음
    add_right = len(stack)

    result = add_left + add_right
    return result

result = problem2(input)
assert result == 3
print("정답입니다.")