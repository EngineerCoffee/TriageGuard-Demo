# 🛡️ TriageGuard Live Showcase (`EngineerCoffee/TriageGuard-Demo`)

Welcome to the interactive showcase repository for **[TriageGuard](https://triageguard.engineer.coffee)** — an autonomous, event-driven CI/CD Triage and Rollback Guardrails agent built by **Engineer.Coffee**.

👉 **Explore the Open Pull Requests to see `triageguard[bot]` in action:**

| Pull Request | Failure Classification | What It Demonstrates |
| :--- | :--- | :--- |
| **[PR #1: MISRA C:2012 Rule 11.3 & Conan Failure](../../pull/1)** | `CODE_DEFECT` (`98%`) | Pinpoints `src/can_bus.c:42`, dynamically loads this repo's [`AGENTS.md`](./AGENTS.md) & [`misra-c-compliance`](./.agents/skills/misra-c-compliance/SKILL.md) skill via the GitHub API, and posts a single sticky PR comment + GitHub Check Run. |
| **[PR #2: 20MB Jenkins Linker OOMKilled (Exit 137)](../../pull/2)** | `INFRA_OOM_TIMEOUT` (`97%`) | Sanitizes massive `ld.lld` OOM logs into `< 2,500` tokens in `< 0.25s` and prescribes exact container memory (`--memory=8g`) & CMake parallelism adjustments. |
| **[PR #3: Recurring Registry TLS Timeout (Chronic Flake)](../../pull/3)** | `TRANSIENT_FLAKE` (`92%`) | Demonstrates **Max 1 Auto-Retry per Commit SHA** and **🔁 Episodic Failure Memory (Cross-Run Déjà Vu)** flagging a `CHRONIC_FLAKE` across distinct commits. |
| **[PR #4: Autonomous Post-Merge Rollback (`revert/triage-501`)](../../pull/4)** | `CREATE_REVERT_PR` | Opened **100% autonomously by `triageguard[bot]`** on isolated branch `revert/triage-501` after a post-merge `CODE_DEFECT` landed on `main` (respecting the Read-Only Default Branch invariant). |

---

## 🔗 Live Production Endpoints

- **Product & Architecture Landing Page:** [https://triageguard.engineer.coffee](https://triageguard.engineer.coffee)
- **Executive ROI & Guardrails Dashboard:** [https://triageguard.engineer.coffee/dashboard](https://triageguard.engineer.coffee/dashboard)
- **Native MCP Server (JSON-RPC 2.0):** [https://triageguard.engineer.coffee/mcp](https://triageguard.engineer.coffee/mcp)
- **Google A2A Agent Card:** [https://triageguard.engineer.coffee/.well-known/agent.json](https://triageguard.engineer.coffee/.well-known/agent.json)
- **`llms.txt` Specification:** [https://triageguard.engineer.coffee/llms.txt](https://triageguard.engineer.coffee/llms.txt)
- **Core Engine Source Repository:** [EngineerCoffee/TriageGuard](https://github.com/EngineerCoffee/TriageGuard)
