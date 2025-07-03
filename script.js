function compress() {
    const input = document.getElementById("inputString").value;
    const output = document.getElementById("output");

    if (!input) {
        output.innerHTML = "⚠️ Please enter a string.";
        return;
    }

    let result = "";
    let count = 1;

    for (let i = 1; i <= input.length; i++) {
        if (input[i] === input[i - 1]) {
            count++;
        } else {
            result += input[i - 1] + count;
            count = 1;
        }
    }

    output.innerHTML = `<strong>Compressed Output:</strong> ${result}`;
}
