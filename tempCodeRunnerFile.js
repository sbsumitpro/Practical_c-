let url = "https://localhost/?conversationid={{gcConversationId}}&lang={{gcLangTag}}&environment={{gcHostOrigin}}&genesysid=27d2af27-d20d-4ba6-b610-be2d3a5abd59&x_metadata=%7BshowSummaryForAll%3Afalse%7D"

const urlParams = new URLSearchParams(url);
console.log("🚀 ~ urlParams:", urlParams)
// let metaData = urlParams.get('x_metadata') ;
metaData = urlParams.get('x_metadata') ? JSON.parse(decodeURIComponent(urlParams.get('x_metadata'))) : null;
console.log("🚀 ~ metaData:", metaData)