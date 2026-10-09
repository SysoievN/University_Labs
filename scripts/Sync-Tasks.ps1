$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
Push-Location $repoRoot
try {
    $dirty = git status --porcelain
    if ($LASTEXITCODE -ne 0) { throw 'Cannot inspect Git checkout.' }
    if ($dirty) { throw 'Commit or preserve local changes before syncing. Nothing was overwritten.' }
    git pull --ff-only
    if ($LASTEXITCODE -ne 0) { throw 'Sync failed; resolve the reported problem without force/reset.' }
    Write-Host 'Tasks synced. Read AGENTS.md, TASKS.md and progress/.'
} finally { Pop-Location }
