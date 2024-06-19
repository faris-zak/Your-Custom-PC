const budgetContent = document.getElementById('budget');
const submitBudget = document.getElementById('submitBudget');
const budgetValue = document.getElementById('budgetValue');

submitBudget.addEventListener('click', function(){
    budgetValue.innerHTML = `Your budget is ${budget.value}`;
    budgetContent.value = '';
});

function clearInputContent(){
    budgetValue.innerHTML = '';
    budgetContent.value = '';
    budgetContent.focus();
}