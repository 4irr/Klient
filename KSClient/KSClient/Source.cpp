#pragma comment(lib, "ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <winsock2.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	WORD wVersionRequested;
	WSADATA wsaData;
	wVersionRequested = MAKEWORD(2, 2);
	WSAStartup(wVersionRequested, &wsaData);

	struct sockaddr_in peer;
	peer.sin_family = AF_INET;
	peer.sin_port = htons(1280);
	//�.�.������ � ������ �� ����� ����������,
		// ����� ����� 127.0.0.1
	peer.sin_addr.s_addr = inet_addr("127.0.0.1");

	SOCKET s = socket(AF_INET, SOCK_STREAM, 0);

	connect(s, (struct sockaddr*)&peer, sizeof(peer));

	char buf[255], b[255];;

	cout << "������� �������� X �������� ������� ���� �������: ";
	cin >> b[0];
	cout << "������� �������� Y �������� ������� ���� �������: ";
	cin >> b[1];
	cout << "\n������� �������� X ������� ������ ���� �������: ";
	cin >> b[2];
	cout << "������� �������� X ������� ������ ���� �������: ";
	cin >> b[3];
	cout << "\n������� �������� X ����������� �����: ";
	cin >> b[4];
	cout << "������� �������� Y ����������� �����: ";
	cin >> b[5];

	b[6] = '\0';

	send(s, b, sizeof(b), 0);
	if (recv(s, buf, sizeof(buf), 0) != 0) {
		cout << "\n";
		for (int i = 0; i < strlen(buf); i++)
		{
			cout << buf[i];
		}
	}
	closesocket(s);

	WSACleanup();
	return 0;
}
