async function fazendoRequisicao() {
    const resposta = await fetch("https://api.adviceslip.com/advice", {
        method: "GET"
    });
    
    const obj = await resposta.json();

    const p = document.createElement("p");
    p.textContent = obj.slip.advice;
    document.body.append(p);
}

fazendoRequisicao();

