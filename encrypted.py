def xor_encrypt(data, key):
    encrypted_data = bytearray()
    key_bytes = key.encode('utf-8')
    key_len = len(key_bytes)
    for i, byte in enumerate(data):
        encrypted_data.append(byte ^ key_bytes[i % key_len])
    return encrypted_data

try:
    with open("D:\py\.vscode\input.txt", 'rb') as file_in:
        data = file_in.read()
    encrypted = xor_encrypt(data, "20246770")
    with open("D:/py/.vscode/decrypted.txt", 'wb') as file_out:
        file_out.write(encrypted)
except FileNotFoundError:
    print("加密文件不存在")