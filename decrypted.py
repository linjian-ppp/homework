def xor_decrypt(encrypted_data, key):
    decrypted_data = bytearray()
    key_bytes = key.encode('utf-8')
    key_len = len(key_bytes)
    for i, byte in enumerate(encrypted_data):
        decrypted_data.append(byte ^ key_bytes[i % key_len])
    return decrypted_data

try:
    with open("D:/py/.vscode/decrypted.txt", 'rb') as file_in:
        encrypted_data = file_in.read()
    decrypted = xor_decrypt(encrypted_data, "20246770")
    print(decrypted.decode('utf-8', errors='ignore'))
except FileNotFoundError:
    print("加密文件不存在")