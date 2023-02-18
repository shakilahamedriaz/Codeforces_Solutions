#include <iostream>
#include <string>

using namespace std;

int main() {
  string guest, host, pile;
  cin >> guest >> host >> pile;

  int guest_count[26] = {0}, host_count[26] = {0}, pile_count[26] = {0};

  // Count the frequency of each letter in the guest and host names
  for (int i = 0; i < guest.length(); i++) {
    guest_count[guest[i] - 'A']++;
  }
  for (int i = 0; i < host.length(); i++) {
    host_count[host[i] - 'A']++;
  }

  // Count the frequency of each letter in the pile of letters
  for (int i = 0; i < pile.length(); i++) {
    pile_count[pile[i] - 'A']++;
  }

  // Check if the frequency of each letter in the pile matches the frequency in the names
  for (int i = 0; i < 26; i++) {
    if (pile_count[i] != guest_count[i] + host_count[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}
