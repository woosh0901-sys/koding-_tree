const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.on('line', (line) => {
    // 입력받은 문자열을 정수로 변환
    const n = parseInt(line.trim(), 10);

    // 조건에 따른 물의 상태 출력
    if (n < 0) {
        console.log("ice");
    } else if (n >= 100) {
        console.log("vapor");
    } else {
        console.log("water");
    }

    // 입력 종료 후 프로세스 종료
    rl.close();
});