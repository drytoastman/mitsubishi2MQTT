const char html_page_installer[] PROGMEM = R"====(
<div id="function">
    _TXT_FUNCTIONS
</div>

<form id='FTEMP_' style='display:inline'>
    <input name='code' type='text' />
    <input name='value' type='text' />
    <button type='submit'>Set</button>
</form>

<p>
    <form action='/' method='get'>
        <button>Back</button>
    </form>
</p>
)====";
