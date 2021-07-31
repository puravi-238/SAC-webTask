const input1 = document.querySelector("#name");
const input2 = document.querySelector("#rate");
const myButton = document.querySelector(".btn");
const list = document.querySelector(".container ul");

myButton.addEventListener("click", (e) => {

    e.preventDefault();

    const myLi = document.createElement('li');
    myLi.innerHTML = "Name : " + input1.value + "  Rating : " + input2.value;
    list.appendChild(myLi);

    const myspan = document.createElement('span');
    myspan.innerHTML = " X ";
    myLi.appendChild(myspan);

    const close = document.querySelectorAll('span');
    for (let i = 0; i < close.length; i++) {
        close[i].addEventListener('click', () => {
            close[i].parentElement.style.opacity = 0;
            setTimeout(() => {
                close[i].parentElement.style.display = "none";
                close[i].parentElement.remove();
            }, 500);

        })
    }
})