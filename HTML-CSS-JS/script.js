const budgetContent = document.getElementById('budget');
const submitBudget = document.getElementById('submitBudget');
const budgetValue = document.getElementById('budgetValue');

submitBudget.addEventListener('click', function(){
    
});

function clearInputContent(){
    budgetContent.innerHTML = `Your budget is ${budget.value}`;
    budgetContent.value = '';
    budgetContent.focus();
}