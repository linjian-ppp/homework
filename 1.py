import numpy as np

def calculate_inverse(matrix):
    try:
        inverse_matrix = np.linalg.inv(matrix)
        return inverse_matrix
    except np.linalg.LinAlgError:
        return "矩阵不可逆。"

def main():

    n = int(input("请输入矩阵的大小 n x n: "))
    
    
    matrix = np.zeros((n, n))
    
    
    print("请输入矩阵元素")
    for i in range(n):
        row = list(map(float, input().split()))
        matrix[i, :] = row
    
    
    inverse_matrix = calculate_inverse(matrix)
    
    if isinstance(inverse_matrix, str):
        print(inverse_matrix)
    else:
        print("矩阵的逆矩阵是：")
        print(inverse_matrix)

if __name__ == "__main__":
    main()
