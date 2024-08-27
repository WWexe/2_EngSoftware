document.addEventListener('DOMContentLoaded', () => {
    const form = document.getElementById("form");
    const username = document.getElementById("username");
    const email = document.getElementById("email");
    const mobile = document.getElementById("mobile");
    const energia = document.getElementById("energia");
    const inputField = document.getElementById('energia');
    const resultField = document.getElementById('resultado');
  
    form.addEventListener("submit", (event) => {
      event.preventDefault();
      if (checkForm()) {
        alert("TUDO SAFE MEU PATRAO");
        form.reset();
      }
    });
  
    inputField.addEventListener('input', () => {
      const inputValue = parseFloat(inputField.value) || 0;
      const result = inputValue + (inputValue * 0.2);
      resultField.value = result.toFixed(2);
    });
  
    username.addEventListener('input', checkInputUsername);
    email.addEventListener('input', checkInputEmail);
    mobile.addEventListener('input', (event) => {
      formatPhone(event);
      checkInputMobile();
    });
    energia.addEventListener('input', checkInputEnergia);
  
    function formatPhone(event) {
      let value = event.target.value.replace(/\D/g, '');
  
      if (value.length > 2) {
        value = value.replace(/^(\d{2})(\d)/g, '$1 $2');
      }
      if (value.length > 7) {
        value = value.replace(/(\d{5})(\d{1,4})$/, '$1-$2');
      }
  
      event.target.value = value;
    }
  
    function checkInputUsername() {
      const usernameValue = username.value.trim();
  
      if (usernameValue === "") {
        errorInput(username, "Informe seu nome");
      } else {
        clearError(username);
      }
    }
  
    function checkInputEmail() {
      const emailValue = email.value.trim();
      const emailPattern = /^[a-z0-9._%+-]+@[a-z0-9.-]+\.(com|cn|net)$/;
  
      if (emailValue === "") {
        errorInput(email, "Informe um E-mail válido!");
      } else if (!emailPattern.test(emailValue)) {
        errorInput(email, "Informe um e-mail válido");
      } else {
        clearError(email);
      }
    }
  
    function checkInputMobile() {
      const mobileValue = mobile.value.trim();
  
      if (mobileValue.length <= 12) {
        errorInput(mobile, "Informe um número de telefone válido");
      } else {
        clearError(mobile);
      }
    }
  
    function checkInputEnergia() {
      const energiaValue = energia.value.trim();
  
      if (isNaN(energiaValue) || energiaValue === "") {
        errorInput(energia, "Informe um valor numérico válido");
      } else {
        clearError(energia);
      }
    }
  
    function checkForm() {
      checkInputUsername();
      checkInputEmail();
      checkInputMobile();
      checkInputEnergia();
  
      if (
        username.value.trim() === "" ||
        email.value.trim() === "" ||
        mobile.value.trim() === "" ||
        energia.value.trim() === ""
      ) {
        return false; // Retorna false se qualquer campo estiver vazio
      }
      return true; // Retorna true se todos os campos estiverem preenchidos corretamente
    }
  
    function errorInput(input, message) {
      const formContent = input.parentElement;
      const errorElement = formContent.querySelector('a');
      errorElement.innerText = message;
      input.classList.add('error');
    }
  
    function clearError(input) {
      const formContent = input.parentElement;
      const errorElement = formContent.querySelector('a');
      errorElement.innerText = '';
      input.classList.remove('error');
    }
  });